/*
	AUTHOR:S.ABILASH
*/
#ifndef DRIVE_H
#define DRIVE_H 
void COMMAND::change_drive(const std::string& input)
{	
	std::string inputValue = input + ":";
	user.setCwd(inputValue);
	char output[inputValue.length()+1];
	strcpy(output,inputValue.c_str());
	chdir(output);
}
#endif//drive.h