// Copyright (c) 2014 Simon Fell
//
// Permission is hereby granted, free of charge, to any person obtaining a 
// copy of this software and associated documentation files (the "Software"), 
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense, 
// and/or sell copies of the Software, and to permit persons to whom the 
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included 
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN 
// THE SOFTWARE.
//
// 
// Note: This file was generated by WSDL2ZKSforce. 
//		  see https://github.com/superfell/WSDL2ZKSforce
//       DO NOT HAND EDIT.
//

#import "ZKLocation.h"

#import "zkXmlDeserializer.h"
#import "zkParser.h"
/*
<complexType name="address" xmlns="http://www.w3.org/2001/XMLSchema" xmlns:ens="urn:sobject.partner.soap.sforce.com" xmlns:tns="urn:partner.soap.sforce.com" xmlns:fns="urn:fault.partner.soap.sforce.com" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xmlns:soap="http://schemas.xmlsoap.org/wsdl/soap/" xmlns="http://schemas.xmlsoap.org/wsdl/">
  <complexContent>
    <extension base="tns:location">
      <sequence>
        <element nillable="true" type="xsd:string" name="city"/>
        <element nillable="true" type="xsd:string" name="country"/>
        <element nillable="true" type="xsd:string" name="countryCode"/>
        <element nillable="true" type="xsd:string" name="geocodeAccuracy"/>
        <element nillable="true" type="xsd:string" name="postalCode"/>
        <element nillable="true" type="xsd:string" name="state"/>
        <element nillable="true" type="xsd:string" name="stateCode"/>
        <element nillable="true" type="xsd:string" name="street"/>
      </sequence>
    </extension>
  </complexContent>
</complexType>
*/
@interface ZKAddress : ZKLocation {
	NSString  *city;
	NSString  *country;
	NSString  *countryCode;
	NSString  *geocodeAccuracy;
	NSString  *postalCode;
	NSString  *state;
	NSString  *stateCode;
	NSString  *street;
}
-(id)init;
-(id)initWithZKXmlDeserializer:(ZKXmlDeserializer *)d;
-(id)initWithXmlElement:(zkElement *)e;

@property (retain) NSString  *city; 
@property (retain) NSString  *country; 
@property (retain) NSString  *countryCode; 
@property (retain) NSString  *geocodeAccuracy; 
@property (retain) NSString  *postalCode; 
@property (retain) NSString  *state; 
@property (retain) NSString  *stateCode; 
@property (retain) NSString  *street; 
@end
