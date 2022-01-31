/*
	AUTHOR:S.ABILASH
*/

#ifndef TREE_H
#define TREE_H
void COMMAND::show_tree(const std::string& input)
{
	std::string temp="tree \""+input+"\"";
	char command[temp.length()+1];
	strcpy(command,temp.c_str());
	system(command);
}
void COMMAND::show_tree_absolute(const std::string& input)
{
	std::string temp="tree "+input;
	char command[temp.length()+1];
	strcpy(command,temp.c_str());
	system(command);
}
#endif