/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/PDNetworkConnectionTask.h>

@class PDWebService, NSString;

@interface PDWebServiceConnectionTask : PDNetworkConnectionTask {

	PDWebService* _webService;

}

@property (nonatomic,retain) PDWebService * webService;              //@synthesize webService=_webService - In the implementation block
@property (nonatomic,readonly) NSString * passTypeID; 
+(id)taskWithWebService:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)passTypeID;
-(id)endpointComponents;
-(id)queryFields;
-(void)reportAuthenticationFailure;
-(void)reportUnexpectedResponseCode:(long long)arg1 ;
-(void)reportNSURLConnectionError:(id)arg1 ;
-(void)reportMalformedResponseError:(id)arg1 ;
-(PDWebService *)webService;
-(void)setWebService:(PDWebService *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)request;
-(id)method;
-(id)bodyDictionary;
-(id)headerFields;
@end
