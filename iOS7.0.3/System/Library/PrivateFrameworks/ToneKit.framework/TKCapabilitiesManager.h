/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface TKCapabilitiesManager : NSObject {

	BOOL _isRingtoneStoreAvailable;
	BOOL _isToneStoreAvailable;

}

@property (assign,nonatomic) BOOL isRingtoneStoreAvailable;              //@synthesize isRingtoneStoreAvailable=_isRingtoneStoreAvailable - In the implementation block
@property (assign,nonatomic) BOOL isToneStoreAvailable;                  //@synthesize isToneStoreAvailable=_isToneStoreAvailable - In the implementation block
+(id)sharedCapabilitiesManager;
-(BOOL)hasTelephonyCapability;
-(BOOL)hasVibratorCapability;
-(void)dealloc;
-(id)init;
-(void)_checkRingtoneStoreAvailability;
-(void)setIsRingtoneStoreAvailable:(BOOL)arg1 ;
-(void)setIsToneStoreAvailable:(BOOL)arg1 ;
-(BOOL)hasUserGeneratedVibrationsCapability;
-(BOOL)isRingtoneStoreAvailable;
-(BOOL)isToneStoreAvailable;
@end
