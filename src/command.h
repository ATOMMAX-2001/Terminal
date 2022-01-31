/*
	AUTHOR:S.ABILASH
*/
#ifndef  COMMAND_H
#define COMMAND_H

void USER::splitTheInput(const std::string& input)
{
	std::string token;
	std::vector<std::string> available;
	bool foundQuote=false;
	for(int i=0;i<input.length();i++)
	{
		if(input[i]=='$')
		{
			if(foundQuote==true)
				foundQuote=false;
			else
				foundQuote=true;
		}
		if(input[i]=='^')
		{
			std::string stupidUser="";
			i++;
			while(input[i]!='^')
			{
				stupidUser+=input[i];
				i++;
			}
			available.push_back(trim(stupidUser));
			token="";
			continue;
		}
		if(isspace(input[i]) && foundQuote==false){
			if(token.length()!=0)		
				available.push_back(trim(token));
			token="";
		}
		token+=input[i];
	}
	available.push_back(token);
	for(int i=0;i<available.size();i++)
	{
		if(available[i].length()==0)
			available.erase(available.begin()+i);
	}

	if(available[0]=="list"){
		if(available.size()==2){
			command.show_list(getCwd()+"\\"+trim(available[1]));
		}else if(available.size()==1){
			command.show_list(getCwd()+"\\");
		}else{
			error("Too Much Values");printf("\n");
		}
	}else if(available[0]=="listfrom"){
		if(available.size()==2){
			command.show_list(trim(available[1]));
		}else if(available.size()==1){
			command.show_list(getCwd()+"\\");
		}else{
			error("Too Much Values");printf("\n");
		}
	}else if(available[0]=="put"){
		for(int i=1;i<available.size();i++)
		{
			user.message(available[i]);
		}
		std::cout<<std::endl;
	}else if(available[0]=="drive"){
		if(available.size()==2){
			command.change_drive(trim(available[1]));
		}else if(available.size()>2){
			user.error("Too Much Values");printf("\n");
		}else {
			user.error("Too Low Values");printf("\n");
		}
	}else if(available[0]=="goto"){
		if(available.size()==2){
			if(input == "goto ..")
			{
				command.previous_dir(getCwd());
			}else{
				command.change_dir(getCwd()+"\\"+trim(available[1]));
			}
		}else if(available.size()==1){
			user.error("Too Low Values");
			printf("\n");
		}else if(available.size()>2){
			user.error("Too Much Values");
			printf("\n");
		}
	}else if(available[0]=="copy"){
		if(available.size()==3)
		{
			command.copy_file(user.getCwd()+"\\"+trim(available[1]),user.getCwd()+"\\"+trim(available[2]));
		}else if(available.size()<3){
			user.error("Too Low Values");
			printf("\n");
		}else{
			error("Too Much Values");
			printf("\n");
		}
	}else if(available[0]=="copyfrom"){
		if(available.size()==3)
		{
			command.copy_file_from(trim(available[1]),trim(available[2]));
		}else if(available.size()<3){
			user.error("Too Low Values");
			printf("\n");
		}else{
			error("Too Much Values");
			printf("\n");
		}
	}else if(available[0]=="view"){
		if(available.size()==2){
			command.view_file(getCwd()+"\\"+trim(available[1]));
		}else if(available.size()==1){
			user.error("Too Low Values");
			printf("\n");
		}else{
			user.error("Too Much Values");
			printf("\n");
		}
	}else if(available[0]=="new"){
		if(available.size()==2){
			command.create_file(user.getCwd()+"\\"+trim(available[1]));
		}else if(available.size()>2){
			for(int total=1;total<available.size();total++)
			{
				command.create_file(user.getCwd()+"\\"+trim(available[total]));
			}
		}else{
			user.error("Too Low Values");
			printf("\n");
		}
	}else if(available[0]=="write"){
		if(available.size()==2){
			command.write_file(user.getCwd()+"\\"+trim(available[1]));
		}else if(available.size()>2){
			user.error("Too Much Values");
			printf("\n");
		}else{
			user.error("Too Low Values");
			printf("\n");
		}
	}else if(available[0]=="create"){
		if(available.size()==2){
			command.create_dir_for_me(user.getCwd()+"\\"+trim(available[1]));
		}else if(available.size()>2){
			for(int total=1;total<available.size();total++){
				command.create_dir_for_me(user.getCwd()+"\\"+trim(available[total]));
			}
		}else if(available.size()<2){
				user.error("Too Low Values");
				printf("\n");
			}
	}else if(available[0]=="remove"){
		if(available[0]=="remove"){
			if(available.size()==2){
				command.remove_file(user.getCwd()+"\\"+trim(available[1]));
			}else if(available.size()>2){
				for(int total=1;total<available.size();total++){
					command.remove_file(user.getCwd()+"\\"+trim(available[total]));
				}
			}else if(available.size()<2){
				user.error("Too Low Values");
				printf("\n");
			}
		}
	}else if(available[0]=="destroyall"){
		if(available.size()==2){
			command.remove_dir_recursive(user.getCwd()+"\\"+trim(available[1]));
		}else if(available.size()>2){
			for(int total=1;total<available.size();total++){
				command.remove_dir_recursive(user.getCwd()+"\\"+trim(available[total]));
			}
		}else if(available.size()<2){
				user.error("Too Low Values");
				printf("\n");
			}
	}else if(available[0]=="destroy"){
		if(available.size()==2){
			command.remove_dir(user.getCwd()+"\\"+trim(available[1]));
		}else if(available.size()>2){
			for(int total=1;total<available.size();total++){
				command.remove_dir(user.getCwd()+"\\"+trim(available[total]));
			}
		}else if(available.size()<2){
				user.error("Too Low Values");
				printf("\n");
			}
	}else if(available[0]=="rename"){
		if(available.size()==3){
			command.rename_file(user.getCwd()+"\\"+trim(available[1]),user.getCwd()+"\\"+trim(available[2]));
		}else if(available.size()<3){
			user.error("Too Low Values");
		}else{
			user.error("Too High Values");
		}
	}else if(available[0]=="treedetail"){
		if(available.size()==2){
			command.show_tree_absolute(trim(available[1]));
		}else if(available.size()<2){
			user.error("Too Low Values");
		}else{
			user.error("Too High Values");
		}
	}else if(available[0]=="eval"){
		if(available.size()>0){
            std::string TerminalDir(terminalDirTemp);
			std::string tempCommand=TerminalDir+"\\..\\src\\eval.exe ";
			for(int total=1;total<available.size();total++)
			{
				tempCommand+=available[total]+" ";
			}
			char pyCommand[tempCommand.length()+1];
			strcpy(pyCommand,tempCommand.c_str());
			system(pyCommand);	
		}else{
			user.error("Too Low Values");
			printf("\n");
		}
		
	}else if(available[0]=="type"){
		if(available.size()>0){
			for(int total=1;total<available.size();total++)
			{
				std::string sysCommand="assoc "+trim(available[total]);
				char winCommand[sysCommand.length()+1];
				strcpy(winCommand,sysCommand.c_str());
				system(winCommand);
			}
		}else{
			user.error("Too Low Values");
			printf("\n");
		}
	}else if(available[0]=="find"){
		if(available.size()==2){
			command.find_file("\""+user.getCwd()+"\""+"\\"+trim(available[1]));
		}else if(available.size()<2){
			user.error("Too Low Values");printf("\n");
		}else{
			user.error("Too High Values");printf("\n");
		}
	}else if(available[0]=="findfrom"){
		if(available.size()==2){
			command.find_file(trim(available[1]));
		}else if(available.size()<2){
			user.error("Too Low Values");printf("\n");
		}else{
			user.error("Too High Values");printf("\n");
		}
	}else if(available[0]=="helpme"){
		if(available.size()==2){
			command.get_help(trim(available[1]));
		}else if(available.size()<2){
			user.error("Too Low Values");printf("\n");
		}else{
			user.error("Too High Values");printf("\n");
		}
	}else if(available[0]=="tele"){
		if(available.size()==1){
			user.error("Too Low Values");printf("\n");
		}else if(available.size()==2){
			if(trim(available[1])== "show"){
				printf("\nNAME\t\t\t LOCATION\n");
				printf("\n");
				HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hconsole,14);
				for(auto i = init.begin();i!=init.end();i++)
				{
					std::cout<<(*i).first<<"\t\t\t"<<(*i).second<<std::endl;
				}
				SetConsoleTextAttribute(hconsole,user.getUserTheme());
			}else{
			std::string my_str = trim(available[1]);
			transform(my_str.begin(), my_str.end(), my_str.begin(), ::toupper);
			std::string output = user.find_value(my_str,0);
			command.change_dir(output);
		}
		}else{
			user.error("Too High Values");printf("\n");
		}
	}else if(available[0]=="setcolor"){
		if(available.size()==1){
			user.message("The Available Color Are :[ GREEEN (1), RED (2), PURPLE (3) , YELLOW (4), WHITE (5), AQUA (6), VIOLET (7), BLUE (8) ] ");printf("\n");
			user.message("Just set the color using the command setcolor 1 or change it in terminal.config file");
			printf("\n");
		}else if(available.size()==2){
			HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
			switch(stoi(trim(available[1])))
			{
				case 1: SetConsoleTextAttribute(hconsole,10);user.setUserTheme(10);break;//green
				case 2: SetConsoleTextAttribute(hconsole,12);user.setUserTheme(12);break;//red
				case 3: SetConsoleTextAttribute(hconsole,13);user.setUserTheme(13);break;//purp
				case 4: SetConsoleTextAttribute(hconsole,14);user.setUserTheme(14);break;//yellow
				case 5: SetConsoleTextAttribute(hconsole,15);user.setUserTheme(15);break;//white
				case 6: SetConsoleTextAttribute(hconsole,11);user.setUserTheme(11);break;//aqua
				case 7: SetConsoleTextAttribute(hconsole,5);user.setUserTheme(5);break;//violet
				case 8: SetConsoleTextAttribute(hconsole,9);user.setUserTheme(9);break;//blue
				default: user.error("WRONG VALUE");printf("\n");
			}
		}else{
			user.error("TOO High Values");
		}
	}else if(available[0]=="run"){
		if(available.size()==2){
			if(trim(available[1])== "show"){
				HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hconsole,14);
				for(auto i = appinit.begin();i!=appinit.end();i++)
				{
					std::cout<<(*i).first<<"\t\t\t"<<(*i).second<<std::endl;
				}
				SetConsoleTextAttribute(hconsole,user.getUserTheme());
			}else{
			std::string temp = trim(available[1]);
			transform(temp.begin(),temp.end(),temp.begin(),::toupper);
			temp = user.find_value(temp,1);
			char output[temp.length()+1];
			strcpy(output,temp.c_str());
			system(output);
		}
		}else if(available.size()==1){
			user.error("Too Low Values");printf("\n");
		}else{
			user.error("Too High Values");printf("\n");
		}
	} else{
		std::string tempValue,sysCommand;
		for(int total=0;total<available.size();total++)
		{
			tempValue=trim(available[total]);
			if(tempValue[0]=='@')
			{
				tempValue[0]='\\';
				available[total]=" "+user.getCwd()+tempValue;
			}else if(tempValue[0]=='#')
			{
				tempValue[0]='\\';
				available[total]="\""+user.getCwd()+tempValue+"\"";
			}		
		
		}
		for(int total=0;total<available.size();total++)
		{
			sysCommand+=trim(available[total])+" ";
		}
		char outputValue[sysCommand.length()+1];
		strcpy(outputValue,sysCommand.c_str());
		system(outputValue);
	}
	
}

#endif
