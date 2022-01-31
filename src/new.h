/*
	AUTHOR:S.ABILASH
*/

#ifndef NEW_H
#define NEW_H
void COMMAND::create_file(const std::string& input)
{
	std::ofstream dest(input,std::ios::binary);
	user.message("Created Successfully");
	printf("\n");
}
#endif