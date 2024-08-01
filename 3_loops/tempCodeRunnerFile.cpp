char  n;
cout<<"enter the char"<<endl;
cin>>n;
n=int(n);
if (n>97&&n<122){
    cout<<"lowercase";
}
if(n>65&&n<91){
    cout<<"Upper case";
}
if (n>0&&n<9){
    cout<<"numeric";
}
}