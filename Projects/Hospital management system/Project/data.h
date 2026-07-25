// abstraction to implement data saving in hospital class
#include <string>
using namespace std;
class DataStorage
{

public:
        virtual void storeData() = 0;

        virtual ~DataStorage()
        {
        }
};