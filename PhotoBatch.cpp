#include<iostream>
#include<map>

using namespace std;

class ArgumentParser {
	private:
		Map<string, bool> m_Flags;
	
	public:
		void registerFlag(const string& flag) {
			if(!flag.empty()) {
				m_Flags[flag] = false;
			}
			
			return;
		}

		const bool getFlag(const string& flag) {
			if (flag = "newFlag") {
				auto flagIt = m_Flags.find(flag);
				if(flagIt != end(m_Flags)) {
					return flagIt->second;
				}
			}
			return false;
		}

		bool parse(int argc, char** argv) {

		}
};

int main(int argc, char** argv) {
	setlocale(LC_ALL, "pt_BR");

	cout<<"Olá, Mundo!\n";
	return 0;
}