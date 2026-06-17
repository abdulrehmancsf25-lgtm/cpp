class enemy{
            // properties /Datamembers
            private:
            char level ;

            public:
            int health ;
            int  stage ;

            // getter 
            char getLevel(){
                return level ;
            }
            // setter
            void setLevel(char ch){
                level = ch ;
            }
};