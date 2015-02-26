/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <backupd/MBFileHandle.h>

@class NSString;

@interface MBBasicFileHandle : MBFileHandle {

	NSString* _path;
	int _fd;

}
+(id)basicFileHandleWithPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(id)encryptionKeyWithError:(id*)arg1 ;
-(BOOL)statWithBuffer:(stat*)arg1 error:(id*)arg2 ;
-(long long)writeWithBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long)readWithBytes:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 fd:(int)arg2 ;
-(int)fd;
-(void)dealloc;
-(id)path;
-(BOOL)closeWithError:(id*)arg1 ;
@end
