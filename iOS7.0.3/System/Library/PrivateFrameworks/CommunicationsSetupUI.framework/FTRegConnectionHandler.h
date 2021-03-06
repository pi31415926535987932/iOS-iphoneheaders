/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class NSString;

@interface FTRegConnectionHandler : NSObject {

	int _serviceType;
	unsigned _caps;
	NSString* _name;
	NSString* _listenerID;
	NSString* _logName;
	struct {
		unsigned listeningForNotifications : 1;
	}  _handlerFlags;

}

@property (assign,nonatomic) unsigned caps;                                            //@synthesize caps=_caps - In the implementation block
@property (assign,nonatomic) int serviceType;                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * _serviceName; 
@property (nonatomic,retain) NSString * _logName;                                      //@synthesize logName=_logName - In the implementation block
@property (setter=_setListenerID:,nonatomic,copy) NSString * _listenerID;              //@synthesize listenerID=_listenerID - In the implementation block
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)_serviceName;
-(BOOL)connectToDaemon;
-(id)_logName;
-(id)initWithServiceType:(int)arg1 name:(id)arg2 ;
-(void)_startListeningForNotifications;
-(BOOL)isConnectedToDaemon;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)set_logName:(id)arg1 ;
-(id)initWithServiceType:(int)arg1 name:(id)arg2 capabilities:(unsigned long long)arg3 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(BOOL)_isServiceSupported;
-(BOOL)connectToDaemon:(BOOL)arg1 ;
-(void)setServiceType:(int)arg1 ;
-(int)serviceType;
-(void)_disconnectFromDaemon;
-(id)_listenerID;
-(void)_setListenerID:(id)arg1 ;
-(unsigned)caps;
-(void)setCaps:(unsigned)arg1 ;
@end

