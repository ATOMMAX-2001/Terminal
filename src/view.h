/*
	AUTHOR:S.ABILASH
*/

#ifndef VIEW_H
#define VIEW_H
void COMMAND::view_file(const std::string& source)
{
	std::ifstream userFile;
	userFile.open(source);
	if(!userFile)
	{
		user.error(source);
		user.error("No Such File Found To View");
		printf("\n");
	}else{
		std::string temp;
		while(getline(userFile,temp))
		{
			user.message(temp);
		}
		printf("\n");
	}
}
#endif