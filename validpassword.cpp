bool isValid(string &str)
{
	int lc=0,uc=0,sc=0,no=0;
	for(int i=0;i<str.size();i++)
	{
		if(str.size()<8 || str.size()>15){
			return false;
		}
		else{
			if(str[i]==' '){
				return false;
			}
			else if((int(str[i])>=65 && int(str[i])<=90))
			{
				uc++;
			}
			else if((int(str[i])>=97 && int(str[i])<=122))
			{
				lc++;
			}
			else if((int(str[i])>=48 && int(str[i])<=57))
			{
				no++;
            }
			else if ((int(str[i]) >= 32 && int(str[i]) <= 47) ||
                    (int(str[i]) >= 58 && int(str[i]) <= 64) ||
                    (int(str[i]) >= 91 && int(str[i]) <= 96) ||
                    (int(str[i]) >= 123 && int(str[i]) <= 126)) 
			    {
                sc++;
                }
            }
    }
	if(uc!=0 && lc!=0 && no!=0 && sc!=0){
		return true;
	}
	else{
		return false;
	}
}
