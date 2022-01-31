/*
	AUTHOR:S.ABILASH
*/

#ifndef TERMINAL_H
#define TERMINAL_H 
std::map<std::string,std::string> init;
std::map<std::string,std::string> appinit;
void clear();

char terminalDirTemp[10000];
class USER
{

private:
	int userThemeValue=11;
	std::string currentDir="C:\\";
	std::string userName;
public:
	USER()
	{
        getcwd(terminalDirTemp,sizeof(terminalDirTemp));
		std::string username=getenv("USERPROFILE");
		this->currentDir=username;
		char output[username.length()+1];
		strcpy(output,username.c_str());
		chdir(output);
		setUserName();
	}
	void error(const std::string input);
	void message(const std::string input);

	void setUserTheme(std::string input);
	void setUserTheme(int input);
	int getUserTheme();
	int findTheThemeColor(std::string input);

	std::string getKeyFromConfig(std::string& inputData,int pos);
	std::string getValueFromConfig(std::string& inputData,int pos);
	std::string find_value(std::string& inputData,int flag);

	std::string getCwd();
	void setCwd(const std::string& input);
	void changeCwd(const std::string& input);
	bool checkDirExist(const std::string& input);
	bool checkFileExist(const std::string& input);
	void setUserName();
	std::string getUserName();

	void splitTheInput(const std::string& input);
	std::vector<std::string> getAvailableFunction();
} user;

class COMMAND
{
public:
	void show_list(const std::string& input);
	void show_list_from(const std::string& input);
	void change_dir(const std::string& input);
	void previous_dir(const std::string& input);
	void change_drive(const std::string& input);
	void copy_file(const std::string& source, const std::string& destination);
	void copy_file_from(const std::string& source, const std::string& destination);
	void view_file(const std::string& source);
	void create_file(const std::string& source);
	void write_file(const std::string& source);
	void create_dir_for_me(const std::string& source);
	void remove_file(const std::string& input);
	void remove_dir(const std::string& input);
	void remove_dir_recursive(const std::string& input);
	void rename_file(const std::string& input,const std::string& output);
	void help_me();
	void show_tree(const std::string& input);
	void show_tree_absolute(const std::string& input);
	void find_file(const std::string& input);
	void find_file_from(const std::string& input);
	void get_help(const std::string& input);
} command;


void clear()
{
	system("cls");
}

void USER::error(const std::string input)
{
	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hconsole,12);
	std::cout<<input<<std::endl;
	SetConsoleTextAttribute(hconsole,user.getUserTheme());
}
void USER::message(const std::string input)
{
	HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hconsole,10);
	std::cout<<input<<std::endl;
	SetConsoleTextAttribute(hconsole,user.getUserTheme());
}
void USER::setUserTheme(std::string input)
{
	int value=findTheThemeColor(input);
	if(value!=-1){
		this->userThemeValue=value;
	}else{
		error("No Such Color Found");
		message("Type help color for more information");
		printf("\n");
	}
}
int USER::getUserTheme()
{
	return this->userThemeValue;
}

void USER::setUserTheme(int input)
{
	this->userThemeValue = input;
}

int USER::findTheThemeColor(std::string input)
{
	if(input=="GREEN") return 10;
	else if(input=="PURPLE") return 13;
	else if(input=="AQUA") return 11;
	else if(input=="RED") return 12;
	else if(input=="YELLOW") return 14;
	else if(input=="WHITE") return 15;
	else return -1;
}
std::string USER::find_value(std::string& inputData,int flag)
{
	//for path
	if(flag==0){
		for(auto i=init.begin();i!=init.end();i++)
		{
			if((*i).first == inputData)
			{
				return (*i).second;
			}
		}
	}else{
			for(auto i=appinit.begin();i!=appinit.end();i++)
		{
			if((*i).first == inputData)
			{
				return (*i).second;
			}
		}
	}
  return user.getCwd();
}
std::string USER::getKeyFromConfig(std::string& inputData,int pos)
{
	std::string temp;
	for(int i=0;i<pos;i++)
	{
		temp+=inputData[i];
	}
	return temp;
}
std::string USER::getValueFromConfig(std::string& inputData,int pos)
{
	std::string temp;
	for(int i=pos+1;i<inputData.length();i++)
	{
		temp+=inputData[i];
	}
	return temp;
}
bool USER::checkDirExist(const std::string& input)
{
	DWORD fileType=GetFileAttributesA(input.c_str());
	if(fileType==INVALID_FILE_ATTRIBUTES){
		return false;
	}else{
		if(fileType && FILE_ATTRIBUTE_DIRECTORY){
			return true;
		}
	}
	return false;
}
void USER::setCwd(const std::string& input)
{
	if(checkDirExist(input))
		this->currentDir=input;
	else error("No Such Directory Exist");printf("\n");
}
std::string USER::getCwd()
{
	return this->currentDir;
}

void USER::setUserName()
{
	std::string username=getCwd();
	std::string temp;
	for(int i=username.length()-1;username[i]!='\\';i--)
	{
		temp+=username[i];
	}
	reverse(temp.begin(),temp.end());
	this->userName=temp;
	
}
std::string USER::getUserName()
{
	return this->userName;
}
std::string trim(const std::string& str)
{
	char uniqueDouble='$';std::string tempValue="";
	size_t first = str.find_first_not_of(' ');
    if (std::string::npos == first)
    {
        return str;
    }
    size_t last = str.find_last_not_of(' ');
    tempValue=str.substr(first, (last - first + 1));
    first=tempValue.find_first_not_of(uniqueDouble);
    if (std::string::npos == first)
    {
        return str;
    }
	last=tempValue.find_last_not_of(uniqueDouble) + 1;
	return tempValue.substr(first, (last - first + 1));
}
bool USER::checkFileExist(const std::string& input)
{
	FILE* checkFile;
	char userSourceFile[input.length()+1];
	strcpy(userSourceFile,input.c_str());
	if(checkFile==fopen(userSourceFile,"r")){
		fclose(checkFile);
		return true;
	}
	return false;
}
#endif //terminal header
