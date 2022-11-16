//  KN 18.2.2019





#include <mosquittopp.h>
#include <math.h>

	

class mqtt : public mosqpp::mosquittopp
{

	char buf[251]; 

	public:
		mqtt(const char *id, const char *host, int port);
		~mqtt(){};

		void on_connect(int rc);
		void on_message(const struct mosquitto_message *message);
		void on_subscribe(int mid, int qos_count, const int *granted_qos);
		void ICT_rest(void);

	

};

