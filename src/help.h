/*
	AUTHOR:S.ABILASH
*/

#ifndef HELPME_H
#define HELPME_H
void COMMAND::help_me()
{
	user.message("Hello There, Looks Like Your in Confused State");
	user.message("Dont Worry I am There For You");
	printf("\n");

	std::cout<<"Terminal is a console based Application which is somewhat  similar to windows command prompt but we can say Terminal is little bit ";
	std::cout<<"better than cmd. My Creator created me to make others life easier while using Terminal than cmd "<<std::endl;
    printf("\n");

    std::cout<<"These are the List Of Command Available"<<std::endl;
    printf("\n");

    HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hconsole,14);
    printf("\tcopy\t\t <Copy Files>");printf("\n");
    printf("\tcopyfrom\t <Copy all Files From Dir to Dir>");printf("\n");
    printf("\tclear\t\t <Clear The Console>");printf("\n");
    printf("\tcreate\t\t <Create a New Directory>");printf("\n");
    printf("\tdestroy\t\t <Delete Existing Directory>");printf("\n");
    printf("\tdestroyall\t <Delete Directory with SubFolder>");printf("\n");
    printf("\tdrive\t\t <Navigate to Different Drive>");printf("\n");
    printf("\tfind\t\t <Search Files In that Directory>");printf("\n");
    printf("\tfindfrom\t <Search Files From Given Path>");printf("\n");
    printf("\tgoto\t\t <Navigate to Different Directory>");printf("\n");
    printf("\tlist\t\t <List All Files In That Directory>");printf("\n");
    printf("\tlistfrom\t <List All Files From a Given Path>");printf("\n");
    printf("\tnew\t\t <Create a Empty File>");printf("\n");
    printf("\tremove\t\t <Delete Existing File>");printf("\n");
    printf("\trename\t\t <Rename Existing File>");printf("\n");
    printf("\tview\t\t <Display All The Content In a File>");printf("\n");
    printf("\twrite\t\t <Create and Write a new File>");printf("\n");
    printf("\tdate\t\t <Display The Date>");printf("\n");
    printf("\tsetdate\t\t <Set The Date>");printf("\n");
    printf("\ttype\t\t <Display The FileType Info>");printf("\n");
    printf("\tstorage\t\t <Display The Volume of the Drive>");printf("\n");
    printf("\ttree\t\t <Display The Trees And Directory In Tree Format>");printf("\n");
    printf("\ttreedetail\t <Display The Trees And Directory In Tree Format of a absolute path>");printf("\n");
    printf("\ttime\t\t <Display Time>");printf("\n");
    printf("\tsettime\t\t <Set Time>");printf("\n");
    printf("\tcheckdisk\t <Check The Disk And Report The Staus(Administrator Required)>");printf("\n");
    printf("\teval\t\t <Similar to Calculator>");printf("\n");
    printf("\tpoweroff\t <Shutdown>");printf("\n");
    printf("\trestart\t\t <Restart>");printf("\n");
    printf("\tavailable\t <List All Type Of Available File Format>");printf("\n");
    printf("\tcmd\t\t <Open instance of Cmd>");printf("\n");
    printf("\tterminal\t <Open instance of Terminal>");printf("\n");
    printf("\texit\t\t <Close The Terminal>");printf("\n");
    printf("\tenv\t\t <Display All The System Path>");printf("\n");
    printf("\t$\t\t <Used When Typing WhiteSpace>");printf("\n");
    printf("\t@\t\t <Tag Decorator Used When Calling External Function>");printf("\n");
    printf("\t#\t\t <Hash Decorator Used When the Path has WhiteSpace>");printf("\n");
    printf("\t^\t\t <Caret Decorator Used When the Path has WhiteSpace More Like $ Decorator>");printf("\n");
	printf("\ttele\t\t <Tele will teleport the location of the path  to what user set>");printf("\n");
	printf("\tsetcolor\t <SetColor will used to change the theme of the terminal>");printf("\n");
	printf("\trun\t\t <Run will used to execute the Application which user set>");printf("\n");


    printf("All The Default CMD Command Too\n");;

	SetConsoleTextAttribute(hconsole,user.getUserTheme());
    std::cout<<"If You Stuck on how to use these command then type \'helpme <command Name>\' for cmd Command type \'help'"<<std::endl;
    user.message("Thank You For Using Terminal - S.Abilash");
    printf("\n");
}
void COMMAND::get_help(const std::string& input)
{
	std::cout<<"TERMINAL -S.ABILASH  <HELP> "<<std::endl;
	printf("\n");
	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if(input=="copy"){
		user.message("Copy: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tCopy command is used to copy files from one location to another"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tcopy <sourceFile> <destinationFile>";
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="copyfrom"){
		user.message("Copyfrom: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tCopyfrom command is used to copy files from one Directory to another Directory Need absolute Path"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tcopyfrom <Path For sourceFile> <Path For destinationFile>";
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="clear"){
		user.message("Clear: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tClear command is used to clear the console"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tclear";
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="create"){
		user.message("Create: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tCreate command is used to create a Directory"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tcreate <DirectoryName> |OR| create <DirName1> <DirName2> ... ";
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="destory"){
		user.message("Destroy: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tDestroy command is used to delete an Empty Directory"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tdestory <DirectoryName> |OR| destory <DirName1> <DirName2> ... ";
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="destoryall"){
		user.message("Destroyall: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tDestroyall command is used to delete a Non-Empty Directory"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tdestoryall <DirectoryName> |OR| destoryall <DirName1> <DirName2> ... ";
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="drive"){
		user.message("Drive: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tDrive command is used to Navigate to other Drives"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tdrive <driveName> |EXAMPLE| drive d ";
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="find"){
		user.message("Find: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tFind command is used to find a File Or a Folder in a Directory"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tfind <filename>";
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="findfrom"){
		user.message("Findfrom: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tFindfrom command is used to find a File Or a Folder from a given Path"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tfindfrom <Path> |EXAMPLE| findfrom D:\\user\\hello.txt";
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="goto"){
		user.message("Goto: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tGoto command is used to Navigate from One Directory To Another"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tgoto <DirectoryName> |EXAMPLE| goto desktop |OR| goto desktop\\terminal(*\\ is important)"<<std::endl;
		std::cout<<"\tgoto .. (*for previous Directory)";
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="list"){
		user.message("List: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tList command is used to list out  All The Files And Directory"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tlist |OR| list user\\files"<<std::endl;
		std::cout<<"\tlist .. (*for previous Directory)";
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="listfrom"){
		user.message("Listfrom: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tListfrom command is used to list out All The Files And Directory from a given path"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tlistfrom <path> |EXAMPLE| listfrom D:\\users\\terminal"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="new"){
		user.message("New: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tNew command is used to create a Empty file (kinda Magic File)"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tnew <fileName> |OR| new <file1> <file2> .."<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="remove"){
		user.message("Remove: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tRemove command is used to Delete a File"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tremove <fileName> |OR| remove <file1> <file2> .."<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="rename"){
		user.message("Rename: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tRename command is used to Rename Files And Folder"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tremove <Old fileName> <New FileName>"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="view"){
		user.message("View: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tView command is used to Display The Content Of a File"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tview <fileName>"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="write"){
		user.message("Write: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tWrite command is used to create a file And Give Content To it"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\twrite <fileName>"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="date"){
		user.message("Date: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t Date command is used to Display System Date"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tdate"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="setdate"){
		user.message("Setdate: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t Setdate command is used to Display And Change the System Date"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tsetdate"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="type"){
		user.message("Type: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t Type command is used to Give The File Extension Name"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\ttype <Extension> |EXAMPLE| type .txt"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="storage"){
		user.message("Storage: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t Storage command is used to Display The Drive And The Volume of The Disk"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tstorage"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="tree"){
		user.message("Tree: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t Tree command is used to Display The Folders And File In Tree Shape"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\ttree"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="treedetail"){
		user.message("Treedetail: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t Treedetail command is used to Display The Folders And File In Tree Shape from Given Path"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\ttreedetail <path> |EXAMPLE| treedetail D:\\users\\hello"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="time"){
		user.message("Time: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tTime Command is Used To Display System Time "<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\ttime"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="settime"){
		user.message("Settime: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tSettime Command is Used To Display and set the  System Time "<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tsettime"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="checkdisk"){
		user.message("Checkdisk: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tCheckDisk Command is Used To Check All the Disk And Give The Report "<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tCheckDisk"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="eval"){
		user.message("Eval: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tEval Command is Used To Perform Arithmethic Calculation "<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\teval <Arithmethic Statement> |EXAMPLE| eval 5+5 |OR| eval (2*2)-10"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="poweroff"){
		user.message("Poweroff: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tPoweroff Command is Used To Shutdown Your Computer"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tpoweroff"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="restart"){
		user.message("Restart: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tRestart Command is Used To Restart Your Computer"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\trestart"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="available"){
		user.message("Available: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tAvailable Command is Used To Display List of All Available File Type Registered In Your Computer"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tavailable"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="cmd"){
		user.message("Cmd: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tCmd Command is Used To Create a Instance Of Cmd in Terminal Windows"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tcmd"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="terminal"){
		user.message("Terminal: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tTerminal Command is Used To Create a Instance Of Terminal in Terminal Windows"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tterminal"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="$" || input==" $"){
		user.message("$ Dollor Decorator: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t$ This Decorator Is Often Used When you have WhiteSpace in your commandLine"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t$ <FirstName LastName> |EXAMPLE| new $hello world (*This will create a new file named hello world"<<std::endl;
		std::cout<<"\tNOTE $ Decorator has no ending values that mean if you start with $sign than rest of the Statement is taken as single commnad"<<std::endl;
		std::cout<<"\t|EXAMPLE| new $hello world how$ this will create a file named hello world how$"<<std::endl;
		std::cout<<"\t|NOTE| If Your Writing a path having spaces then you have to use $ decorator and \" \" near the Directory having spaces "<<std::endl;
		std::cout<<"\t|EXAMPLE|treedetail $c:\\users\\\"hello world\"\\folder"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="@"){
		user.message("@ Tag Decorator: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t@ This Decorator Is Often Used When you are calling outside function from terminal as @ this will have the address of current Working Directory"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tfunctionName <@fileName> || functionName <@/path>"<<std::endl;
		std::cout<<"\tpython @hello.py"<<std::endl;
		std::cout<<"\tjava -classpath @; hello |OR| java -cp #; hello"<<std::endl;
		std::cout<<"\t@name Of The Application"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="#"){
		user.message("# Hash Decorator: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t# This Decorator Is Often Used When you are calling outside function from terminal as # this will have the address of current Working Directory and The path has some whitespace"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tfunctionName <#fileName> || functionName <#/path>"<<std::endl;
		std::cout<<"\n\t C:\\Users\\Hello World\\hi.txt-:$ notepad #hi.txt\n"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input=="^" ||input==" ^"){
		user.message("^ Caret Decorator: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t^ This Decorator Is Similar To Dollor Decorator But In This We Can Tell The Terminal When The Name is End By Again Adding ^ Decorator"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\t ^<FirstName LastName>^ |EXAMPLE| new ^hello world^ hi (*This will create a new file named hello world and hi"<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input =="tele"){
		user.message("Tele: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tTele Command used to teleport or change the path of the terminal to the user set mainly used for fast navigation"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\ttele <PATH NAME YOU HAVE SET>\n\ttele show (*it will show all the location you have set)"<<std::endl;
		std::cout<<"\tTo Set The Path Go To Terminal.config from Config Folder and set the path";
		std::cout <<"\t|EXAMPLE| tele project "<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input =="setcolor"){
		user.message("SetColor: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tSetColor Command used to change the theme of the terminal temporarly, To change the theme for permanent You Need To Change it in terminal.config"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tsetcolor<VALUE>\n\ttype setcolor in terminal to find Different colors and values"<<std::endl;
		std::cout <<"\t|EXAMPLE| setcolor 1 "<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	}else if(input =="run"){
		user.message("Run: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\tRun Command Used to execute the Application Which User Set in Terminal.config file from config folder"<<std::endl;
		user.message("Syntax: ");
		SetConsoleTextAttribute(hconsole,14);
		std::cout<<"\trun <PATH NAME YOU HAVE SET>"<<std::endl;
		std::cout <<"\t|EXAMPLE| run firefox "<<std::endl;
		printf("\n\n");
		HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hconsole,14);
	} else{
		user.error(input);
		user.error("No Such Command Found");
		printf("\n");
	}
	

	SetConsoleTextAttribute(hconsole,user.getUserTheme());

}
#endif