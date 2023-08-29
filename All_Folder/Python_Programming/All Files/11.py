import pygame
import random
pygame.mixer.init()

homeimg = pygame.image.load("home.png")
bgimg = pygame.image.load("bg.png")
overimg = pygame.image.load("last.png")

pygame.init()
win = pygame.display.set_mode((800, 500))
pygame.display.set_caption("Snake Game")
pygame.display.update()
clock = pygame.time.Clock()
font = pygame.font.SysFont(None, 50)


def home():
    exitGame = False
    while not exitGame:
        win.blit(homeimg, (0, 0))
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                exitGame = True
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_RETURN:
                    pygame.mixer.music.load("naagin.mp3")
                    pygame.mixer.music.play()
                    loop()

        pygame.display.update()
        clock.tick(40)


def plot_snake(size, snakecords):
    for x, y in snakecords:
        pygame.draw.rect(win, (28, 89.02, 27.45), [x, y, size, size])


def printScreen(text, color, x, y):
    scrText = font.render(text, True, color)
    win.blit(scrText, [x, y])


def loop():
    with open("highScore.txt", "r") as f:
        highScore = f.read()
    snakeLength = 1
    snakecords = []
    exitGame = False
    gameOver = False
    x = 50
    y = 50
    fx = random.randint(20, 550)
    fy = random.randint(20, 350)
    vx = 0
    vy = 0
    ive = 7
    size = 15
    fps = 40
    score = 0
    while not exitGame:
        if gameOver:
            win.fill((0, 255, 0))
            win.blit(overimg, (0, 0))
            with open("highScore.txt", "w") as f:
                f.write(str(highScore))
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    exitGame = True
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_RETURN:
                        home()
        else:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    exitGame = True
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_RIGHT:
                        vx = ive
                        vy = 0
                    if event.key == pygame.K_LEFT:
                        vx = -ive
                        vy = 0
                    if event.key == pygame.K_DOWN:
                        vy = ive
                        vx = 0
                    if event.key == pygame.K_UP:
                        vy = -ive
                        vx = 0
            x += vx
            y += vy
            if abs(x - fx) <= 7.5 and abs(y - fy) <= 7.5:
                score += 1
                fx = random.randint(20, 550)
                fy = random.randint(20, 350)
                snakeLength += 2
                if score > int(highScore):
                    highScore = score
            win.fill((0, 255, 0))
            win.blit(bgimg, (0, 0))
            if x < 0 or x > 800 or y < 0 or y > 500:
                gameOver = True
                pygame.mixer.music.load("hit.mp3")
                pygame.mixer.music.play()
            printScreen("Score: " + str(score) + "  High Score: " + str(highScore), (91.4, 71.4, 58.8), 5, 5)
            pygame.draw.rect(win, (255, 0, 0), [fx, fy, size, size])
            head = [x, y]
            snakecords.append(head)
            if len(snakecords) > snakeLength:
                del snakecords[0]
            if head in snakecords[:-1]:
                pygame.mixer.music.load("hit.mp3")
                pygame.mixer.music.play()
                gameOver = True
            plot_snake(size, snakecords)
        pygame.display.update()
        clock.tick(fps)

    pygame.quit()
    quit()


home()
