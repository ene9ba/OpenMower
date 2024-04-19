// Created by Elmar Elflein on 18/07/22.
// Copyright (c) 2022 Elmar Elflein. All rights reserved.
//
// This work is licensed under a Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.
//
// Feel free to use the design in your private/educational projects, but don't try to sell the design or products based on it without getting my consent first.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//

#include <floating_average.h>


FloatingAverage::FloatingAverage()
{

}


// Init floating values single value array and set to 0
void FloatingAverage::begin(uint32_t nrvalues)
{
   
   this->numberfloatingvalues = nrvalues;
   this->valuearray = new float[this->numberfloatingvalues];
   for (uint32_t i=0; i < numberfloatingvalues; i++)
   {
		valuearray[i] = 0.0;
   }
   this->IndexNextvalue = 0;
}	

// Add an new single value to the array
void FloatingAverage::AddToFloatAvg(float value)
{
	valuearray[IndexNextvalue] = value;
	IndexNextvalue++;
	IndexNextvalue %= numberfloatingvalues;	
}

// calculate mean value of single values from array
float FloatingAverage::GetFloatAvg()
{
	float TempSum = 0;
	for (uint32_t i=0; i < numberfloatingvalues; ++i)
	{
		TempSum += valuearray[i];
	}
	return TempSum / numberfloatingvalues;
}


