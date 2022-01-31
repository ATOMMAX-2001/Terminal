/*
    AUTHOR:S.ABILASH
    Copyright to S.ABILASH ALL RIGHTS RESERVED
*/
#include "../src/dependency.h"

void handle_sigint(int sig)
{
    signal(SIGINT, handle_sigint);
}

int main(int argc,char* argv[])
{

user.message("_______________________________    _____   .___  _______      _____   .____");      
user.message("\\__    ___/\\_   _____/\\______   \\  /     \\  |   | \\      \\    /  _  \\  |    |");     
user.message("  |    |    |    __)_  |       _/ /  \\ /  \\ |   | /   |   \\  /  /_\\  \\ |    |     ");
user.message("  |    |    |        \\ |    |   \\/    Y    \\|   |/    |    \\/    |    \\|    |___  ");
user.message("  |____|   /_______  / |____|_  /\\____|__  /|___|\\____|__  /\\____|__  /|_______ \\ ");
user.message("                   \\/         \\/         \\/              \\/         \\/         \\/ ");
user.message(" Version:1.0.2        AUTHOR ~S.ABILASH        ALL RIGHTS RESERVED        ForHelpType: helpme");
std::cout<<std::endl;
std::cout<<std::endl;
    
    
    std::ifstream myFile;
    std::string TerminalDir(terminalDirTemp);
    myFile.open(TerminalDir+"/../config/terminal.config");
    if(!myFile.is_open())
    {
       clear();
       user.error("Configuration File Is Not Found Please Install All The File Correctly");
       getch();
       exit(1);   
    }

    std::string data,key,value;
    //import all the path and configuration in the CONFIG FILE
    signal(SIGINT, handle_sigint);
    while(getline(myFile,data))
    {
       if(data.find("#APPLICATION")!=-1){
        break;
       }else if(data.find("#")!=-1){
        continue;
       }
       key="";value="";
    int pos=data.find(':');
    if(pos!=-1){
       key=user.getKeyFromConfig(data,pos);
       value=user.getValueFromConfig(data,pos);
       if(key=="COLOR"){
        user.setUserTheme(value);
       }else{
       init.insert(std::pair<std::string,std::string>(key,value));
      }
    }
   }
   while(getline(myFile,data))
   {
    if(data.find("#APPLICATION")!=-1){
        continue;
    }else if(data.find("#")!=-1){
        continue;
    }
    key="";value="";
    int pos=data.find(':');
    if(pos!=-1){
       key=user.getKeyFromConfig(data,pos);
        value=user.getValueFromConfig(data,pos);
        appinit.insert(std::pair<std::string,std::string>(key,value));
    }
   }


    std::cin.clear();
    std::cin.sync();
    do
    {
        std::cout<<std::endl;
        if(data=="exit"){
            user.error("Logging Out!!");
            break;
        }else if(data=="clear"){
            clear();
        }else if(data=="whomadeu" || data=="author" || data=="AUTHOR" || data=="creator"){
            user.message("I WAS MADE BY S.ABILASH");
            printf("\n");
        }else if(data=="poweroff"){
            system("shutdown -s -t 1");
        }else if(data=="restart"){
            system("shutdown -r");
        }else if(data=="version"){
            user.message("Termianal-Version 1.0.2");
            printf("\n");
        }else if(data=="abilash" || data=="s.abilash"){
            user.message("He is MY GOD and My Hero");
            printf("\n");
        }else if(data=="helpme"){
            command.help_me();
        }else if(data=="tree"){
            command.show_tree(user.getCwd());
        }else if(data=="date"){
            system("date /t");
        }else if(data=="setdate"){
            system("date");
        }else if(data=="checkdisk"){
            system("chkdsk");
        }else if(data=="time"){
            system("time /t");
        }else if(data=="settime"){
            system("time");
        }else if(data=="storage"){
            system("vol");
        }else if(data=="available"){
            system("assoc");
        } else{
            user.splitTheInput(data);    
        }       
        user.message(user.getUserName()+"@Terminal");
        std::cout<<user.getCwd()<<" -:$ ";     

    } while (getline(std::cin,data));
    
   

}
