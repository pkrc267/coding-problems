int emirpMinion(int num) {
    int c=0;
     auto s=std::to_string(num);
    for (int i=0;i<s.size();i++){
        for (int j=0;i+j<s.size();j++){
            long a,b;
            auto s2=s.substr(i,j+1);
            a=stol(s2);
            std::reverse(s2.begin(),s2.end());
            b=stol(s2);
            if (p(a)&&p(b)) c+=a;
           
        }
        
    }
    return (c)?c:-1;
}
int p(int n){
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return (n==1)?0:1;
}