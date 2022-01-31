/*
	AUTHOR:S.ABILASH
*/

#ifndef WIRTE_H
#define WIRTE_H
void COMMAND::write_file(const std::string& input)
{
	std::ofstream editFile;
	editFile.open(input);
	if(!editFile){
		user.error("Something Went Wrong, File couldnt be Opened");
		printf("\n");
	}else{
		std::string userInput;
		user.message("Type The File Content Below( Type \'exit\' in new line to close the content): ");
		printf("\n");
		while(getline(std::cin,userInput))
		{
			if(userInput=="exit")
			{
				break;
			}else{
				editFile<<userInput<<std::endl;
			}
		}
	}
}
#endif