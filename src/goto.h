/*
	AUTHOR:S.ABILASH
*/

#ifndef  GOTO_H
#define GOTO_H 
void COMMAND::change_dir(const std::string& input)
{
	if(user.checkDirExist(input))
	{
		user.setCwd(input);
        char output[input.length()+1];
        strcpy(output,input.c_str());
        chdir(output);
	}else{
		user.error("No Such Directory Found");
		printf("\n");
	}
	
}
void COMMAND::previous_dir(const std::string& input)
{
	int pos =input.rfind('\\');
	if(pos!=-1){
		std::string temp="";
		for(int i=0;i<pos;i++)
		{
			temp+=input[i];
		}
		if(user.checkDirExist(temp))
		{
			user.setCwd(temp);
            chdir("..");
		}else{
			user.error("No Such Directory Found");
			printf("\n");
		}
	}else{
		user.error("Something Doesn't Make Any Sense");
		printf("\n");
	}
	
}
#endif
