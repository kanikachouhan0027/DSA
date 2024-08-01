/*char toLowercase(char ch)
    {if(ch>='a' && ch<='z')
       {return ch;}
    else
        {ch=ch-'A'+'a';}
    return ch;}
bool isPalindrome(string s) {
    int start=0;
    int end=s.length()-1;
    while(start<=end){
       if((s[start]>=32 && s[start]<=47) || (s[start]>=58 && s[start]<=64) || (s[start]>=91 && s[start]<=96) ||
       (s[start]>=123 && s[start]<=126))
        {start++;}

        if((s[end]>=32 && s[end]<=47) || (s[end]>=58 && s[end]<=64) || (s[end]>=91 && s[end]<=96) ||
      ( s[end]>=123 && s[end]<=126))
        {end--;}

       else{
          if(toLowercase(s[start])!=toLowercase(s[end])){
            return 0;
          }
          else{
            start++;
            end--;
          }
    }}
    return 1;
} wrong since ye agr consecutive 2 numbers nonalphanumeric ho to consecutive skip nahi kr raha */