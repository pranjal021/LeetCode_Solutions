class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        return abs(date_to_int(date1) - date_to_int(date2));
    }
    
    int date_to_int(string date){
        
        int y = stoi(date.substr(0,4));
        int m = stoi(date.substr(5,2));
        int d = stoi(date.substr(8,2));
        
        int days = 0;
        for(int Y=1971;Y<y;Y++){
            days += isLeap(Y) ? 366 :365;
        }
        
        for(int mo=1; mo< m ; mo++){
            days += day_in_month(mo,y);
        }
        
        return days + d;
    }
    
    bool isLeap(int y){
        return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
    }
    
    int day_in_month(int m,int y){
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 ) return 31;
        if(m==2) return isLeap(y) ? 29 : 28;
        return 30;
    }
    
};
