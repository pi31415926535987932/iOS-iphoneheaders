/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AggregateDictionary.framework/Support/addaily
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <addaily/addaily-Structs.h>
@class NSString, NSMutableDictionary, ADKeyStore;

@interface ADLogSerializer : NSObject {

	NSString* _logPathPrefix;
	NSMutableDictionary* _scalars;
	NSMutableDictionary* _distributions;
	NSMutableDictionary* _metadata;
	ADKeyStore* _whitelist;

}
+(id)_logDataFromDescription:(id)arg1 errorDescription:(id*)arg2 ;
+(id)_OSVersion;
+(id)_systemID;
+(id)_deviceID;
-(char)scalarKeyIsWhitelisted:(id)arg1 ;
-(char)distributionKeyIsWhitelisted:(id)arg1 ;
-(id)initWithDefaultLogPath;
-(void)addScalar:(long long)arg1 forKey:(id)arg2 ;
-(void)addDistribution:(SCD_Struct_AD0*)arg1 forKey:(id)arg2 ;
-(void)serializeWithDate:(int)arg1 andAppInfo:(id)arg2 ;
-(id)initWithLogPathPrefix:(id)arg1 ;
-(id)_logPathForDate:(id)arg1 ;
-(void)_addThirdPartyAppInfo;
-(void)_addMetadataKeys;
-(void)addMetadata:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
@end
