char *encode(char *src)
{     
    int i = 0;
    string res = "";
    int count = 1;
    while(src[i]){
        if(src[i] == src[i+1]){
            count++;
        }else{
            res += src[i];
            res += to_string(count);
            count = 1;
        }
        i++;
    }
    res += src[i];
    res += to_string(count); 
    char *ch = new char[res.length()+1];
    for(i = 0; i < res.length(); i++){
        ch[i] = res[i];
    }
    ch[i]='\0';
    
    return ch;
}  
