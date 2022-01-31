/*
	AUTHOR:S.ABILASH
*/

#ifndef CREATE_H
#define CREATE_H
void COMMAND::create_dir_for_me(const std::string& input)
{
	char mkdir[input.length()+1];
	strcpy(mkdir,input.c_str());
	if(CreateDirectory(mkdir,NULL))
	{
		user.message("Created Successfully");
		printf("\n");
	}else{
		user.error("Cant Able To Create a New Directory");
		printf("\n");
	}
}
#endif