/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:16:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKRotate : SKAction {

	SKCRotate* _mycaction;

}
+(id)rotateByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 ;
+(id)rotateToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4 ;
+(id)rotateByAngle:(float)arg1 duration:(double)arg2 ;
+(id)rotateToAngle:(float)arg1 duration:(double)arg2 ;
+(id)rotateToAngle:(float)arg1 duration:(double)arg2 shortestUnitArc:(char)arg3 ;
+(id)rotateByX:(float)arg1 duration:(double)arg2 ;
+(id)rotateToX:(float)arg1 duration:(double)arg2 ;
+(id)rotateByY:(float)arg1 duration:(double)arg2 ;
+(id)rotateToY:(float)arg1 duration:(double)arg2 ;
-(id)reversedAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

