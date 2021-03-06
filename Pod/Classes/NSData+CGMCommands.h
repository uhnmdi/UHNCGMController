//
//  NSData+CGMCommands.h
//  UHNCGMCollector
//
//  Created by Nathaniel Hamming on 2015-01-08.
//  Copyright (c) 2015 University Health Network.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import "UHNCGMConstants.h"

/**
 `NSData+CGMCommands` constructs CGM commands or values in `NSDate` format to be sent is a CGM sensor
 */
@interface NSData (CGMCommands)

/**
 Constructs the current time value to be sent to the CGM Session Start Time characteristic
 
 @returns Current time value in NSData format
 
 */
+ (NSData*)cgmCurrentTimeValue;

/**
 Joins the fluid type with the sample location into a single octet
 
 @param type The fluid type. See `UHNCGMConstants` for `CGMTypeOption` definition
 @param location The sample location. See `UHNCGMConstants` for `CGMLocationOption` definition
 
 @returns A sample type/location octet NSData format
 
 */
+ (NSData*)joinFluidType: (GlucoseFluidTypeOption)type
          sampleLocation: (GlucoseSampleLocationOption)location;

@end
