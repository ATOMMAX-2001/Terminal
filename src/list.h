/*
    AUTHOR:S.ABILASH
*/

#ifndef  LIST_H
#define LIST_H 
void COMMAND::show_list(const std::string& input)
{
		std::vector<std::string> STORAGE;
		DIR *d;
        struct dirent *r;
        int ind=0;
        char myFile[input.length()+1];
        strcpy(myFile,input.c_str());
        d=opendir(myFile);
        while((r=readdir(d))!=NULL)
        {
        	STORAGE.push_back(r->d_name);
            ind+=1;
        }
        if(STORAGE.size()!=0){
        	printf("Item Name: \n");
        	for(auto i=STORAGE.begin();i!=STORAGE.end();i++)
        	{
        		   std::cout<<"\t"<<*i<<std::endl;
        	}
        	printf("\nTOTAL NUMBER OF ITEM IN THAT DIRECTORY IS %d\n",ind);
        }else{
        	user.error("No Such File Or Directory Found");
            printf("\n");
        }
}
void COMMAND::show_list_from(const std::string& input)
{
        std::vector<std::string> STORAGE;
        DIR *d;
        struct dirent *r;
        int ind=0;
        char myFile[input.length()+1];
        strcpy(myFile,input.c_str());
        d=opendir(myFile);
        while((r=readdir(d))!=NULL)
        {
            STORAGE.push_back(r->d_name);
            ind+=1;
        }
        if(STORAGE.size()!=0){
            printf("Item Name: \n");
            for(auto i=STORAGE.begin();i!=STORAGE.end();i++)
            {
                   std::cout<<"\t"<<*i<<std::endl;
            }
            printf("\nTOTAL NUMBER OF ITEM IN THAT DIRECTORY IS %d\n",ind);
        }else{
            user.error("No Such File Or Directory Found");
            printf("\n");
        }
}
#endif//list.h