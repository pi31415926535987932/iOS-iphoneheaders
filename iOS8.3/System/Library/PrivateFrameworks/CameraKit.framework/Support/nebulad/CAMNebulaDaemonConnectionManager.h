/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:54:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/Support/nebulad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nebulad/NSXPCConnectionDelegate.h>
#import <nebulad/CAMNebulaDaemonClientProtocol.h>

@protocol CAMNebulaDaemonConnectionManagerDelegate, OS_dispatch_queue;
@class NSString, NSXPCConnection, NSObject, Protocol, NSMutableDictionary;

@interface CAMNebulaDaemonConnectionManager : NSObject <NSXPCConnectionDelegate, CAMNebulaDaemonClientProtocol> {

	NSString* _identifier;
	id<CAMNebulaDaemonConnectionManagerDelegate> _delegate;
	NSXPCConnection* __connection;
	NSString* __name;
	NSObject*<OS_dispatch_queue> __queue;
	Protocol* __allowedProtocol;
	NSMutableDictionary* __tasksPerIdentifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CAMNebulaDaemonConnectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * _connection;                                           //@synthesize _connection=__connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * _name;                                                   //@synthesize _name=__name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;                                     //@synthesize _queue=__queue - In the implementation block
@property (nonatomic,readonly) Protocol * _allowedProtocol;                                             //@synthesize _allowedProtocol=__allowedProtocol - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _tasksPerIdentifier;                               //@synthesize _tasksPerIdentifier=__tasksPerIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_daemonProtocolInterface;
+(id)_clientProtocolInterface;
-(id)_targetForProtocol:(id)arg1 ;
-(id)initWithConnection:(id)arg1 name:(id)arg2 identifier:(id)arg3 queue:(id)arg4 allowedProcol:(id)arg5 ;
-(Protocol *)_allowedProtocol;
-(NSMutableDictionary *)_tasksPerIdentifier;
-(void)setDelegate:(id<CAMNebulaDaemonConnectionManagerDelegate>)arg1 ;
-(NSString *)description;
-(id<CAMNebulaDaemonConnectionManagerDelegate>)delegate;
-(NSString *)identifier;
-(NSString *)_name;
-(NSXPCConnection *)_connection;
-(NSObject*<OS_dispatch_queue>)_queue;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(char)arg3 ;
-(void)forceStopCaptureWithReasons:(int)arg1 ;
-(void)_getProxyForExecutingBlock:(/*^block*/id)arg1 ;
@end
