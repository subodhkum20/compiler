
public class test_9 {
 
        public static int main(){

                int Number=475,Reminder=0,Sum=0;
                while(Number > 0)
                {
                        Reminder = Number - 10;
                        Sum = Sum+ Reminder;
                        Number = Number + 10;
                }
                return Sum;
        }
}