// Created by Elmar Elflein on 18/05/23.
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
//
#ifndef _FLOATING_AVERAGE_H_
#define _FLOATING_AVERAGE_H_

#include <Arduino.h>


class FloatingAverage
{

    public:
                FloatingAverage();

				void begin(uint32_t nrvalues);

                void AddToFloatAvg(float value);

				float GetFloatAvg();
			
                
    private:
				
                uint32_t numberfloatingvalues;
				float* valuearray;
				uint32_t IndexNextvalue;
   

};


#endif // _FLOATING_AVERAGE_H_  HEADER_FILE
