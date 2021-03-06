/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface TRAuthorizedDeviceManager : NSObject {

	NSMutableDictionary* _authorizationList;

}

@property (nonatomic,readonly) NSArray * deviceIdentifiers; 
+(id)sharedDeviceManager;
+(id)currentDeviceIdentifier;
+(id)_dataForDeviceIdentifier:(id)arg1 ;
+(id)_deviceIdentifierForData:(id)arg1 ;
-(id)init;
-(id)_deviceAuthorizationDirectory;
-(id)_deviceAuthorizationFilePath;
-(BOOL)isAuthorizedDeviceWithIdentifier:(id)arg1 ;
-(BOOL)addDeviceWithIdentifier:(id)arg1 forDeviceName:(id)arg2 error:(id*)arg3 ;
-(NSArray *)deviceIdentifiers;
-(id)deviceNameForIdentifier:(id)arg1 ;
-(BOOL)removeDeviceWithIdentifier:(id)arg1 error:(id*)arg2 ;
@end

