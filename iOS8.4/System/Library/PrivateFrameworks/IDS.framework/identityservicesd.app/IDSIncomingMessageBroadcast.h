/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface IDSIncomingMessageBroadcast : NSObject {

	long long _broadcastID;
	/*^block*/id _broadcastBlock;
	BOOL _broadcastNeedsClientAck;
	BOOL _broadcastPerformed;
	NSString* _messageUUID;
	long long _messagePriority;
	NSString* _messageSenderID;
	unsigned _messageSequenceNumber;

}

@property (assign,nonatomic) long long broadcastID;                       //@synthesize broadcastID=_broadcastID - In the implementation block
@property (nonatomic,copy) id broadcastBlock;                             //@synthesize broadcastBlock=_broadcastBlock - In the implementation block
@property (assign,nonatomic) BOOL broadcastNeedsClientAck;                //@synthesize broadcastNeedsClientAck=_broadcastNeedsClientAck - In the implementation block
@property (assign,nonatomic) BOOL broadcastPerformed;                     //@synthesize broadcastPerformed=_broadcastPerformed - In the implementation block
@property (nonatomic,retain) NSString * messageUUID;                      //@synthesize messageUUID=_messageUUID - In the implementation block
@property (assign,nonatomic) long long messagePriority;                   //@synthesize messagePriority=_messagePriority - In the implementation block
@property (nonatomic,retain) NSString * messageSenderID;                  //@synthesize messageSenderID=_messageSenderID - In the implementation block
@property (assign,nonatomic) unsigned messageSequenceNumber;              //@synthesize messageSequenceNumber=_messageSequenceNumber - In the implementation block
-(void)setBroadcastNeedsClientAck:(BOOL)arg1 ;
-(void)setBroadcastBlock:(id)arg1 ;
-(void)setMessagePriority:(long long)arg1 ;
-(void)setMessageSenderID:(NSString *)arg1 ;
-(void)setMessageSequenceNumber:(unsigned)arg1 ;
-(id)initWithBroadcastBlock:(/*^block*/id)arg1 needsClientAck:(BOOL)arg2 messageUUID:(id)arg3 priority:(long long)arg4 senderID:(id)arg5 sequenceNumber:(unsigned)arg6 ;
-(id)broadcastBlock;
-(BOOL)broadcastNeedsClientAck;
-(BOOL)broadcastPerformed;
-(void)setBroadcastPerformed:(BOOL)arg1 ;
-(long long)messagePriority;
-(NSString *)messageSenderID;
-(unsigned)messageSequenceNumber;
-(void)dealloc;
-(id)init;
-(void)setMessageUUID:(NSString *)arg1 ;
-(long long)broadcastID;
-(void)setBroadcastID:(long long)arg1 ;
-(NSString *)messageUUID;
@end
