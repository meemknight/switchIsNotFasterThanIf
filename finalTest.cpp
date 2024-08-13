
#include <cstdio>

static void versionSwitch(benchmark::State& state) 
{
   srand(0);

	std::vector<unsigned int > vect;
	vect.reserve(50000);

	std::string s;
	s.reserve(50000);

	std::vector<std::string> stuff;
	stuff.reserve(10000);
		
	std::string other;


  for (auto _ : state) 
  {

		other.clear();
		stuff.clear();
		s.clear();
		vect.clear();
	
		unsigned int nr = 0;


		for (unsigned int i = 5; i < 400000; i++)
		{
			int randomNr = rand() % 20;

			switch(randomNr)
			{
			case 0: {nr += rand(); } break;
			case 1: { i --; }break;
			case 2: { i ++; nr /= 7;}break;
			case 3: { i++; nr /= 7; }break;
			case 4: { vect.push_back(nr); } break;
			case 5: { vect.push_back(0); }break;
			case 6: { vect.push_back(0); }break;
			case 16: { vect.push_back(nr + 10); nr /= 3; i ++; } break;
			case 7: {s.push_back('c'); vect.push_back(1); vect.push_back(nr); } break;
			case 8: { s.push_back('c'); }break;
			case 9: { s.push_back('a'); s.push_back( i%20 + 'A'); } break;
			case 10: { s.push_back(i % 20 + 'a'); stuff.push_back("hello"); } break;
			case 11: { stuff.push_back("test"); stuff.push_back("b"); } break;
			case 12: { if(stuff.empty()){other = ""; } else { other = stuff.back(); } } break;
			case 13: { if(stuff.empty()){nr += 10; s += 'a'; vect.push_back(2); } else { other = stuff.back(); } } break;
			case 14: { if (!stuff.empty()) { nr += 10; s += 'a'; vect.push_back(2); } }break;
			case 15: { nr /= 5; nr += rand(); vect.push_back(rand());  if (!stuff.empty()) { s+=stuff.back(); } } break;
			default:
			{
				nr += 10;
				nr ^= rand();
				if (!vect.empty()) { vect.pop_back(); }
				std::string other2 = other;
				if (!stuff.empty()) { stuff.pop_back(); }
				stuff.push_back(other2);

				if(!other2.empty())
					{s.push_back(other2[0]);}
			}

			}

			


		}


    benchmark::DoNotOptimize(nr);
    benchmark::DoNotOptimize(other);
    benchmark::DoNotOptimize(stuff);
    benchmark::DoNotOptimize(s);
    benchmark::DoNotOptimize(vect);

  } 

}




static void versionIfs(benchmark::State& state) 
{

   srand(0);

	std::vector<unsigned int > vect;
	vect.reserve(50000);

	std::string s;
	s.reserve(50000);

	std::vector<std::string> stuff;
	stuff.reserve(10000);
		
	std::string other;


  for (auto _ : state) 
  {

		other.clear();
		stuff.clear();
		s.clear();
		vect.clear();
	
		unsigned int nr = 0;


		for (unsigned int i = 5; i < 400000; i++)
		{
			int randomNr = rand() % 20;

			if(randomNr == 0){nr += rand(); } else
			if(randomNr == 1){ i --; }else
			if(randomNr == 2){ i ++; nr /= 7;}else
			if(randomNr == 3){ i++; nr /= 7; }else
			if(randomNr == 4){ vect.push_back(nr); } else
			if(randomNr == 5){ vect.push_back(0); }else
			if(randomNr == 6){ vect.push_back(0); }else
			if(randomNr == 16){ vect.push_back(nr + 10); nr /= 3; i ++; } else
			if(randomNr == 7){s.push_back('c'); vect.push_back(1); vect.push_back(nr); } else
			if(randomNr == 8){ s.push_back('c'); }else
			if(randomNr == 9){ s.push_back('a'); s.push_back( i%20 + 'A'); } else
			if(randomNr == 10){ s.push_back(i % 20 + 'a'); stuff.push_back("hello"); } else
			if(randomNr == 11){ stuff.push_back("test"); stuff.push_back("b"); } else
			if(randomNr == 12){ if(stuff.empty()){other = ""; } else { other = stuff.back(); } } else
			if(randomNr == 13){ if(stuff.empty()){nr += 10; s += 'a'; vect.push_back(2); } else { other = stuff.back(); } } else
			if(randomNr == 14){ if (!stuff.empty()) { nr += 10; s += 'a'; vect.push_back(2); } }else
			if(randomNr == 15){ nr /= 5; nr += rand(); vect.push_back(rand());  if (!stuff.empty()) { s+=stuff.back(); } } else
			{
				nr += 10;
				nr ^= rand();
				if (!vect.empty()) { vect.pop_back(); }
				std::string other2 = other;
				if (!stuff.empty()) { stuff.pop_back(); }
				stuff.push_back(other2);

				if(!other2.empty())
					{s.push_back(other2[0]);}
			}


		}


    benchmark::DoNotOptimize(nr);
    benchmark::DoNotOptimize(other);
    benchmark::DoNotOptimize(stuff);
    benchmark::DoNotOptimize(s);
    benchmark::DoNotOptimize(vect);

  }

}

BENCHMARK(versionIfs);
BENCHMARK(versionIfs);

BENCHMARK(versionSwitch);
BENCHMARK(versionSwitch);



