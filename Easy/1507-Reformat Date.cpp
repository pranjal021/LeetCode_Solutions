class Solution {
public:
    
    string getMonth(string s){
        if(s == "Jan")
            return "01";
        if(s == "Feb")
            return "02";
        if(s == "Mar")
            return "03";
        if(s == "Apr")
            return "04";
        if(s == "May")
            return "05";
        if(s == "Jun")
            return "06";
        if(s == "Jul")
            return "07";
        if(s == "Aug")
            return "08";
        if(s == "Sep")
            return "09";
        if(s == "Oct")
            return "10";
        if(s == "Nov")
            return "11";
        return "12";
    }
    
    string reformatDate(string date) {
        string ans;
        
        if(date.length() == 13){
            ans = date.substr(9,4) + '-' + getMonth(date.substr(5,3)) + '-' + date.substr(0,2);
        }else{
            ans = date.substr(8,4) + '-' + getMonth(date.substr(4,3)) + '-'+'0' + date.substr(0,1);
        }
        
        return ans;
    }
};
