/*
	AUTHOR:S.ABILASH
*/

#ifndef RENAME_H
#define RENAME_H
void COMMAND::rename_file(const std::string& input,const std::string& output)
{
	char oldName[input.length()+1];
	strcpy(oldName,input.c_str());
	char newName[output.length()+1];
	strcpy(newName,output.c_str());
	if(rename(oldName,newName)){
		user.error("Couldn't Rename the File");
		printf("\n");
	}else{
		user.message("Renamed Successfuly");
		printf("\n");
	}
}
#endif