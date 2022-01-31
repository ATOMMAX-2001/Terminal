/*
	AUTHOR:S.ABILASH
*/
#ifndef FIND_H
#define FIND_H
void COMMAND::find_file(const std::string& input)
{
	std::string temp="dir "+input;
	char sysCommad[temp.length()+1];
	strcpy(sysCommad,temp.c_str());
	system(sysCommad);
}
void COMMAND::find_file_from(const std::string& input)
{
	std::string temp="dir "+input;
	char sysCommad[temp.length()+1];
	strcpy(sysCommad,temp.c_str());
	system(sysCommad);
}

#endif