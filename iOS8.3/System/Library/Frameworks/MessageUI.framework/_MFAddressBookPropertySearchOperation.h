/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:59:44 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/_MFAddressBookSearchOperation.h>

@interface _MFAddressBookPropertySearchOperation : _MFAddressBookSearchOperation
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 ;
+(int)property;
-(CFArrayRef)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const _CFArray*)arg2 identifiers:(const _CFArray*)arg3 properties:(const _CFArray*)arg4 ;
-(CFArrayRef)copyArrayOfUIDsMatchingText:(id)arg1 addresses:(const _CFArray*)arg2 identifiers:(const _CFArray*)arg3 ;
@end

