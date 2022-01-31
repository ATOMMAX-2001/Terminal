/*
    AUTHOR:S.ABILASH
*/
#ifndef COPY_H
#define COPY_H
void COMMAND::copy_file(const std::string& source, const std::string& destination)
{

    std::ifstream  src(source, std::ios::binary);
    std::ofstream  dst(destination, std::ios::binary);
    if(dst << src.rdbuf()){
    	user.message("All Files Copied Successfully");
    	printf("\n");
    }else{
    	user.error("Couldn't Copy the Files");
    	printf("\n");
    }
    	
}
void COMMAND::copy_file_from(const std::string& source, const std::string& destination)
{
    std::string temp="Xcopy "+source+" "+destination+" /E /H /C /I";
    char sysCommand[temp.length()+1];
    strcpy(sysCommand,temp.c_str());
    system(sysCommand);
    
}


#endif