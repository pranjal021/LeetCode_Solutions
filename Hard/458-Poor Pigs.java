public int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
         int T = minutesToTest/minutesToDie;   //Trial count          
        return (int)Math.ceil(Math.log(buckets)/Math.log(T+1));
}
