class Realstudent {
        private :
            int age;
        public :
            Realstudent() {
                //constructer
                cout<<"constructer called"<<endl;

            }
            Realstudent(int b) {
                //parametarised constructer
                age = b;

            }
            Realstudent(int b,int r) {
                //parametarised constructer
                this->age = b;
                this -> rollno = r;
                cout<<"address is using this : "<<this<<endl;

            }
            int rollno = 191090040 ;
        
            void display(){
                cout<<"Age is : "<<age<<endl;
                cout<<"Roll number is : "<<rollno<<endl;
            }
            void setage(int a){
                if(a <= 0){
                    return; 
                }
                age = a;
            }
            ~Realstudent(){
                cout<<"destructer has been called !"<<endl;
            }

    };