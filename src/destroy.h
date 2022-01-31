/*
  AUTHOR:S.ABILASH
*/

#ifndef DESTROY_H
#define DESTROY_H
void COMMAND::remove_dir(const std::string& input)
{
	char source[input.length()+1];
	strcpy(source,input.c_str());
	if(user.checkDirExist(input)){
			if(rmdir(source)){
				user.error("Couldn't Delete The Folder");
				printf("\n");		
		}else{
			user.message("Folder Deleted Successfully");
			printf("\n");
		}	
	}else{
		user.error("Cannot Delete a Folder Which doesn't Exist");
		printf("\n");
	}
	
}

int DeleteDirectory(const std::string &refcstrRootDirectory,bool bDeleteSubdirectories = true)
{
  bool bSubdirectory = false;       
  HANDLE hFile;                      
  std::string strFilePath;               
  std::string strPattern;                 
  WIN32_FIND_DATA FileInformation;             


  strPattern = refcstrRootDirectory + "\\*.*";
  hFile = ::FindFirstFile(strPattern.c_str(), &FileInformation);
  if(hFile != INVALID_HANDLE_VALUE)
  {
    do
    {
      if(FileInformation.cFileName[0] != '.')
      {
        strFilePath.erase();
        strFilePath = refcstrRootDirectory + "\\" + FileInformation.cFileName;

        if(FileInformation.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
        {
          if(bDeleteSubdirectories)
          {
            int iRC = DeleteDirectory(strFilePath, bDeleteSubdirectories);
            if(iRC)
              return iRC;
          }
          else
            bSubdirectory = true;
        }
        else
        {
          if(::SetFileAttributes(strFilePath.c_str(),
                                 FILE_ATTRIBUTE_NORMAL) == FALSE)
            return ::GetLastError();

          if(::DeleteFile(strFilePath.c_str()) == FALSE)
            return ::GetLastError();
        }
      }
    } while(::FindNextFile(hFile, &FileInformation) == TRUE);

    ::FindClose(hFile);

    DWORD dwError = ::GetLastError();
    if(dwError != ERROR_NO_MORE_FILES)
      return dwError;
    else
    {
      if(!bSubdirectory)
      {
        if(::SetFileAttributes(refcstrRootDirectory.c_str(),FILE_ATTRIBUTE_NORMAL) == FALSE)
          return ::GetLastError();
        if(::RemoveDirectory(refcstrRootDirectory.c_str()) == FALSE)
          return ::GetLastError();
      }
    }
  }
  return 0;
}


void COMMAND::remove_dir_recursive(const std::string& input)
{
	if(DeleteDirectory(input)){
		user.error("Couldn't Delete The Folder");
		printf("\n");
	}else{
		user.message("Folder Deleted Successfully");
		printf("\n");
	}
}
#endif