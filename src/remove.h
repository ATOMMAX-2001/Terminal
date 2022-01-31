/*
	AUTHOR:S.ABILASH
*/

#ifndef REMOVE_H
#define REMOVE_H
void COMMAND::remove_file(const std::string& input)
{
	char source[input.length()+1];
	strcpy(source,input.c_str());
	if(remove(source)){
		user.error("Couldn't Remove the File");
		printf("\n");
	}else{
		user.message("File Removed Successfully");
		printf("\n");
	}
}
#endif