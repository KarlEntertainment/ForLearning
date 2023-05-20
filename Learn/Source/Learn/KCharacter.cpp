// Fill out your copyright notice in the Description page of Project Settings.


#include "KCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


// Sets default values
AKCharacter::AKCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComp->SetupAttachment(SpringArmComp);
}

// Called when the game starts or when spawned
void AKCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AKCharacter::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector(), Value);

}

void AKCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector(), Value);
}



// Called every frame
void AKCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AKCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AKCharacter::MoveForward);
	//前进和后退，PlayerCOmponent的函数实现的
	PlayerInputComponent->BindAxis("MoveRight", this, &AKCharacter::MoveRight);
	//左右走，实现同上

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	//Yaw输入，左右转，很明显
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	//上下,没起作用，原因不明
}

