//A function that returns the century that a particular year is in
int solution(int year) {
if(year>=1 and year<=100){
    return 1;
}
else{
    string year_s=to_string(year);
    if(year_s[year_s.size()-1]=='0' and year_s[year_s.size()-2]=='0'){
        string century="";
        
        for(int i=0;i<year_s.size()-2;i++){
           century+=year_s[i]; 
        }
        return stoi(century);
    }
    else{
        string century="";
          for(int i=0;i<year_s.size()-2;i++){
           century+=year_s[i]; 
        }
        int cent=stoi(century);
        return cent+1;
    }
}
return 0;
}
