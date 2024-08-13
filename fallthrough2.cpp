#include <cstdio>static void versionSwitch(benchmark::State& state) {   srand(0);  for (auto _ : state)   {    unsigned int result = 0;        for(unsigned int i=5; i<5000000; i++)    {      int nr = rand()%252;      while((nr >= 12 && nr <= 16)|| (nr >= 26 && nr <= 28)|| (nr >= 34 && nr <= 39)||      (nr >= 41 && nr <= 49))      {        nr = rand()%252;      }     	switch (nr)	{	case 0: { result += 3; } break;	case 1: { result = result ^ 0b101; } break;	case 2: { result = (result + 10) / 3; } break;	case 3: { result = result / 5; result += 2; } break;	case 4: { result += rand() % 100; } break;	case 5: { result *= 2; } break;	case 6: { result  += 8;  result += rand() % 100; } break;	case 7: { result *= 2; } break;	case 8: { result += 21;  result += rand() % 100; } break;	case 9: { result = ~result; } break;	case 10: { result += rand()%10; } break;	case 11: { result += rand()%10; } break;	case 17: 	case 18: 	case 19: 	case 20:			{ result += 425; } break;	case 21: { result += 111; } break;	case 22: { result /= 17; } break;	case 23: { result += rand() % 10; } break;	case 24: { result += rand() % 10; } break;	case 25: { result += rand() % 33; } break;	case 29: { result *= 2; result += 1; } break;	case 30: { result -= 10; } break;	case 31: { result = ~result; } break;	case 32: { result += 1; i -= 1; } break;	case 33: { result += 2; i -= 1; } break;	case 40: { result += rand() % 100; } break;	case 50: { result += rand() % 100; } break;	default : {result += rand() + 10;}break;	}    }    benchmark::DoNotOptimize(result);  }}// Register the function as a benchmarkstatic void versionIfs(benchmark::State& state) {   srand(0);  for (auto _ : state)   {    unsigned int result = 0;        for(unsigned int i=5; i<5000000; i++)    {       int nr = rand()%252;      while((nr >= 12 && nr <= 16)|| (nr >= 26 && nr <= 28)|| (nr >= 34 && nr <= 39)||      (nr >= 41 && nr <= 49))      {        nr = rand()%252;      }   	if(nr == 0){ result += 3; } else	if(nr == 1) { result = result ^ 0b101; } else	if(nr == 2) { result = (result + 10) / 3; } else	if(nr == 3) { result = result / 5; result += 2; } else	if(nr == 4) { result += rand() % 100; } else	if(nr == 5) { result *= 2; } else	if(nr == 6) { result += 8;  result += rand() % 100; } else	if(nr == 7) { result *= 2; } else	if(nr == 8) { result += 21;  result += rand() % 100; } else	if(nr == 9) { result = ~result; } else	if(nr == 10) { result += rand() % 10; } else	if(nr == 11) { result += rand() % 10; } else	if(nr == 17 || nr == 18 || nr == 19 || nr == 20) { result += 425; } else	if(nr == 21) { result += 111; } else	if(nr == 22) { result /= 17; } else	if(nr == 23) { result += rand() % 10; } else	if(nr == 24) { result += rand() % 10; } else	if(nr == 25) { result += rand() % 33; } else	if(nr == 29) { result *= 2; result += 1; } else	if(nr == 30) { result -= 10; } 	else	if(nr == 31) { result = ~result; } else	if(nr == 32) { result += 1; i -= 1; } else	if(nr == 33) { result += 2; i -= 1; } else	if(nr == 40) { result += rand() % 100; } else	if(nr == 50) { result += rand() % 100; } else	{result += rand() + 10;}    }    benchmark::DoNotOptimize(result);  }}BENCHMARK(versionSwitch);BENCHMARK(versionIfs);