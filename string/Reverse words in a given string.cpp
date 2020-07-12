void reverseWords(char *s) {
    string temp = "";
    int i = 0;
    string word = "";
    while(s[i] != '\0'){
        if(s[i] == '.'){
            temp = '.'+word+temp;
            word = "";
        }else{
            word += s[i]; 
        }
        i++;
    }
    temp = word+temp;
    cout<<temp;
    // Your code here
}
