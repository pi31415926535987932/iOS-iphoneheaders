/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:07:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol LakituProtocol <NSObject>
@required
-(void)getAccountInfoWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)changeSMSTargetWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startSMSChallengeWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)storeRecordWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)recoverRecordWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)updateRecordWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)deleteRecordWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)listSMSTargetsWithInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)verifyCertificateWithInfo:(id)arg1 reply:(/*^block*/id)arg2;

@end
