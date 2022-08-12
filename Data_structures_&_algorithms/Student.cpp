class Student {
        private :
            int age;
        public :
            int rollno ;
        
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

    };