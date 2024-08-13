
#include <cstdio>

static void versionSwitch(benchmark::State& state) 
{
 
  srand(0);

  for (auto _ : state) 
  {
    unsigned int result = 0;
    
    for(unsigned int i=5; i<100000; i++)
    {
      int nr = rand()%11;

     

     	switch (nr)
	    {
	      case 0: { result += 3; } break;
	      case 1: { result = result ^ 0b101; } break;
	      case 2: { result = (result + 10) / 3; } break;
	      case 3: { result = result / 5; result += 2; } break;
	      case 4: { result += 1; } break;
	      case 5: { result *= 2; } break;
	      case 6: { result  += 8;  } break;
	      case 7: { result *= 2; } break;
	      case 8: { result += 21;  result += i; } break;
	      case 9: { result = ~result; } break;
	      case 10: { result /= 7; } break;
	    }

    }

    benchmark::DoNotOptimize(result);
  }
}
// Register the function as a benchmark


static void versionIfs(benchmark::State& state) 
{

   srand(0);

  for (auto _ : state) 
  {

    unsigned int result = 0;
    
    for(unsigned int i=5; i<100000; i++)
    {
      int nr = rand()%11;

	    
	      if(nr == 0) { result += 3; } else
	      if(nr == 1) { result = result ^ 0b101; } else
	      if(nr == 2) { result = (result + 10) / 3; } else
	      if(nr == 3) { result = result / 5; result += 2; } else
	      if(nr == 4) { result += 1; } else
	      if(nr == 5) { result *= 2; } else
	      if(nr == 6) { result  += 8;  } else
	      if(nr == 7) { result *= 2; } else
	      if(nr == 8) { result += 21;  result += i; } else
	      if(nr == 9) { result = ~result; } else
	      if(nr == 10) { result /= 7; };

    }

    benchmark::DoNotOptimize(result);

  }

}

BENCHMARK(versionSwitch);
BENCHMARK(versionIfs);

