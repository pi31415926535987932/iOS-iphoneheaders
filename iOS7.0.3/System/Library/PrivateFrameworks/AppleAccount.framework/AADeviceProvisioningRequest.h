/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSString, NSData;

@interface AADeviceProvisioningRequest : AARequest {

	NSString* _dsid;
	NSString* _url;
	NSData* _data;

}
-(id)urlString;
-(id)urlRequest;
-(id)initWithDSID:(id)arg1 URLString:(id)arg2 requestData:(id)arg3 ;
-(void).cxx_destruct;
@end
